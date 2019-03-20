#pragma once
#include "GameData.h"
#include <BWAPI/Game.h>
#include "GameTable.h"
#include <map>

#include <Windows.h>


namespace BWAPI
{
  class Client
  {
  public:
    Client();
    ~Client();

    bool isConnected() const;
    bool connect();
    void disconnect();
    void update(Game& game);

    BWAPI4::GameData* data = nullptr;
  private:
    HANDLE      pipeObjectHandle;
    HANDLE      mapFileHandle;
    HANDLE      gameTableFileHandle;
    GameTable*  gameTable = nullptr;

    void onMatchFrame(Game& game);
    void onMatchStart(Game& game);
    void onMatchEnd(Game& game);
    void clearAll();

    void initGame(GameData& newData);
    void updateGame(GameData& newData);
    void initForces(Game& game);
    void initPlayers(Game& game);
    void initInitialUnits(Game& game);
    void initRegions(Game& game);

    bool wasInGame = false;

    bool connected = false;

    void bwapi4To5(BWAPI4::PlayerData& oldData, PlayerData& newData);
    void bwapi4To5(BWAPI4::UnitData& oldData, UnitData& newData);
    void bwapi4To5(BWAPI4::RegionData& oldData, RegionData& newData);
    void bwapi4To5(BWAPI4::BulletData& oldData, BulletData& newData);
    void bwapi4To5(BWAPI4::ForceData& oldData, ForceData& newData);

    std::map<int, PlayerData> players;
    std::map<int, UnitData>   units;
    std::map<int, RegionData> regions;
    std::map<int, BulletData> bullets;
    std::map<int, ForceData>  forces;
  };
  extern Client BWAPIClient;
}
