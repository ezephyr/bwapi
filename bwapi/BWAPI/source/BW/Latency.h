#pragma once
namespace BW
{
  /** Number of frames until actions take effect @ref localData.  */
  namespace Latency
  {
    enum Enum : u8
    {
      SinglePlayer    = 2,
      LanLow          = 5,
      LanMedium       = 7,
      LanHigh         = 9,
      BattlenetLow    = 14,
      BattlenetMedium = 19,
      BattlenetHigh   = 24
    };
  }
}