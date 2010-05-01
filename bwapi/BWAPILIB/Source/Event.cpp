#include <BWAPI/Event.h>
namespace BWAPI
{
  Event Event::Disconnect()
  {
    Event e;
    e.type=EventType::Disconnect;
    return e;
  }
  Event Event::MatchStart()
  {
    Event e;
    e.type=EventType::MatchStart;
    return e;
  }
  Event Event::MatchEnd()
  {
    Event e;
    e.type=EventType::MatchEnd;
    return e;
  }
  Event Event::MatchFrame()
  {
    Event e;
    e.type=EventType::MatchFrame;
    return e;
  }
  Event Event::MenuFrame()
  {
    Event e;
    e.type=EventType::MenuFrame;
    return e;
  }
  Event Event::SendText(std::string text)
  {
    Event e;
    e.type=EventType::SendText;
    e.text=text;
    return e;
  }
  Event Event::PlayerLeft(Player* player)
  {
    Event e;
    e.type=EventType::PlayerLeft;
    e.player=player;
    return e;
  }
  Event Event::NukeDetect(Position target)
  {
    Event e;
    e.type=EventType::NukeDetect;
    e.position=target;
    return e;
  }
  Event Event::UnitCreate(Unit* unit)
  {
    Event e;
    e.type=EventType::UnitCreate;
    e.unit=unit;
    return e;
  }
  Event Event::UnitDestroy(Unit* unit)
  {
    Event e;
    e.type=EventType::UnitDestroy;
    e.unit=unit;
    return e;
  }
  Event Event::UnitMorph(Unit* unit)
  {
    Event e;
    e.type=EventType::UnitMorph;
    e.unit=unit;
    return e;
  }
  Event Event::UnitShow(Unit* unit)
  {
    Event e;
    e.type=EventType::UnitShow;
    e.unit=unit;
    return e;
  }
  Event Event::UnitHide(Unit* unit)
  {
    Event e;
    e.type=EventType::UnitHide;
    e.unit=unit;
    return e;
  }
  Event Event::UnitRenegade(Unit* unit)
  {
    Event e;
    e.type=EventType::UnitRenegade;
    e.unit=unit;
    return e;
  }
  Event Event::SaveGame(std::string gameName)
  {
    Event e;
    e.type=EventType::SaveGame;
    e.text=gameName;
    return e;
  }
}