#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Multipurpose Clock Generator module
    namespace McgC1{    ///<MCG Control 1 Register
        using Addr = Register::Address<0x40064000,0xffffff00,0x00000000,unsigned char>;
        ///Internal Reference Stop Enable
        enum class IrefstenVal {
            v0=0x00000000,     ///<Internal reference clock is disabled in Stop mode.
            v1=0x00000001,     ///<Internal reference clock is enabled in Stop mode if IRCLKEN is set or if MCG is in FEI, FBI, or BLPI modes before entering Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrefstenVal> irefsten{}; 
        namespace IrefstenValC{
            constexpr Register::FieldValue<decltype(irefsten)::Type,IrefstenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irefsten)::Type,IrefstenVal::v1> v1{};
        }
        ///Internal Reference Clock Enable
        enum class IrclkenVal {
            v0=0x00000000,     ///<MCGIRCLK inactive.
            v1=0x00000001,     ///<MCGIRCLK active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrclkenVal> irclken{}; 
        namespace IrclkenValC{
            constexpr Register::FieldValue<decltype(irclken)::Type,IrclkenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irclken)::Type,IrclkenVal::v1> v1{};
        }
        ///Internal Reference Select
        enum class IrefsVal {
            v0=0x00000000,     ///<External reference clock is selected.
            v1=0x00000001,     ///<The slow internal reference clock is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IrefsVal> irefs{}; 
        namespace IrefsValC{
            constexpr Register::FieldValue<decltype(irefs)::Type,IrefsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irefs)::Type,IrefsVal::v1> v1{};
        }
        ///FLL External Reference Divider
        enum class FrdivVal {
            v000=0x00000000,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 1; for all other RANGE 0 values, Divide Factor is 32.
            v001=0x00000001,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 2; for all other RANGE 0 values, Divide Factor is 64.
            v010=0x00000002,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 4; for all other RANGE 0 values, Divide Factor is 128.
            v011=0x00000003,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 8; for all other RANGE 0 values, Divide Factor is 256.
            v100=0x00000004,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 16; for all other RANGE 0 values, Divide Factor is 512.
            v101=0x00000005,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 32; for all other RANGE 0 values, Divide Factor is 1024.
            v110=0x00000006,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 64; for all other RANGE 0 values, Divide Factor is Reserved .
            v111=0x00000007,     ///<If RANGE 0 = 0 or OSCSEL=1 , Divide Factor is 128; for all other RANGE 0 values, Divide Factor is Reserved .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,FrdivVal> frdiv{}; 
        namespace FrdivValC{
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v000> v000{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v001> v001{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v010> v010{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v011> v011{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v100> v100{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v101> v101{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v110> v110{};
            constexpr Register::FieldValue<decltype(frdiv)::Type,FrdivVal::v111> v111{};
        }
        ///Clock Source Select
        enum class ClksVal {
            v00=0x00000000,     ///<Encoding 0 - Output of FLL or PLLCS is selected (depends on PLLS control bit).
            v01=0x00000001,     ///<Encoding 1 - Internal reference clock is selected.
            v10=0x00000002,     ///<Encoding 2 - External reference clock is selected.
            v11=0x00000003,     ///<Encoding 3 - Reserved.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ClksVal> clks{}; 
        namespace ClksValC{
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v10> v10{};
            constexpr Register::FieldValue<decltype(clks)::Type,ClksVal::v11> v11{};
        }
    }
    namespace McgC2{    ///<MCG Control 2 Register
        using Addr = Register::Address<0x40064001,0xffffff00,0x00000000,unsigned char>;
        ///Internal Reference Clock Select
        enum class IrcsVal {
            v0=0x00000000,     ///<Slow internal reference clock selected.
            v1=0x00000001,     ///<Fast internal reference clock selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrcsVal> ircs{}; 
        namespace IrcsValC{
            constexpr Register::FieldValue<decltype(ircs)::Type,IrcsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ircs)::Type,IrcsVal::v1> v1{};
        }
        ///Low Power Select
        enum class LpVal {
            v0=0x00000000,     ///<FLL (or PLL) is not disabled in bypass modes.
            v1=0x00000001,     ///<FLL (or PLL) is disabled in bypass modes (lower power)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LpVal> lp{}; 
        namespace LpValC{
            constexpr Register::FieldValue<decltype(lp)::Type,LpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lp)::Type,LpVal::v1> v1{};
        }
        ///External Reference Select
        enum class Erefs0Val {
            v0=0x00000000,     ///<External reference clock requested.
            v1=0x00000001,     ///<Oscillator requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Erefs0Val> erefs0{}; 
        namespace Erefs0ValC{
            constexpr Register::FieldValue<decltype(erefs0)::Type,Erefs0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erefs0)::Type,Erefs0Val::v1> v1{};
        }
        ///High Gain Oscillator Select
        enum class Hgo0Val {
            v0=0x00000000,     ///<Configure crystal oscillator for low-power operation.
            v1=0x00000001,     ///<Configure crystal oscillator for high-gain operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Hgo0Val> hgo0{}; 
        namespace Hgo0ValC{
            constexpr Register::FieldValue<decltype(hgo0)::Type,Hgo0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hgo0)::Type,Hgo0Val::v1> v1{};
        }
        ///Frequency Range Select
        enum class Range0Val {
            v00=0x00000000,     ///<Encoding 0 - Low frequency range selected for the crystal oscillator .
            v01=0x00000001,     ///<Encoding 1 - High frequency range selected for the crystal oscillator .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Range0Val> range0{}; 
        namespace Range0ValC{
            constexpr Register::FieldValue<decltype(range0)::Type,Range0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(range0)::Type,Range0Val::v01> v01{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Loss of Clock Reset Enable
        enum class Locre0Val {
            v0=0x00000000,     ///<Interrupt request is generated on a loss of OSC0 external reference clock.
            v1=0x00000001,     ///<Generate a reset request on a loss of OSC0 external reference clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Locre0Val> locre0{}; 
        namespace Locre0ValC{
            constexpr Register::FieldValue<decltype(locre0)::Type,Locre0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(locre0)::Type,Locre0Val::v1> v1{};
        }
    }
    namespace McgC3{    ///<MCG Control 3 Register
        using Addr = Register::Address<0x40064002,0xffffff00,0x00000000,unsigned char>;
        ///Slow Internal Reference Clock Trim Setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sctrim{}; 
    }
    namespace McgC4{    ///<MCG Control 4 Register
        using Addr = Register::Address<0x40064003,0xffffff00,0x00000000,unsigned char>;
        ///Slow Internal Reference Clock Fine Trim
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scftrim{}; 
        ///Fast Internal Reference Clock Trim Setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> fctrim{}; 
        ///DCO Range Select
        enum class DrstdrsVal {
            v00=0x00000000,     ///<Encoding 0 - Low range (reset default).
            v01=0x00000001,     ///<Encoding 1 - Mid range.
            v10=0x00000002,     ///<Encoding 2 - Mid-high range.
            v11=0x00000003,     ///<Encoding 3 - High range.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,DrstdrsVal> drstDrs{}; 
        namespace DrstdrsValC{
            constexpr Register::FieldValue<decltype(drstDrs)::Type,DrstdrsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(drstDrs)::Type,DrstdrsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(drstDrs)::Type,DrstdrsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(drstDrs)::Type,DrstdrsVal::v11> v11{};
        }
        ///DCO Maximum Frequency with 32.768 kHz Reference
        enum class Dmx32Val {
            v0=0x00000000,     ///<DCO has a default range of 25%.
            v1=0x00000001,     ///<DCO is fine-tuned for maximum frequency with 32.768 kHz reference.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Dmx32Val> dmx32{}; 
        namespace Dmx32ValC{
            constexpr Register::FieldValue<decltype(dmx32)::Type,Dmx32Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dmx32)::Type,Dmx32Val::v1> v1{};
        }
    }
    namespace McgC5{    ///<MCG Control 5 Register
        using Addr = Register::Address<0x40064004,0xffffff00,0x00000000,unsigned char>;
        ///PLL0 External Reference Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> prdiv0{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///PLL0 Stop Enable
        enum class Pllsten0Val {
            v0=0x00000000,     ///<MCGPLL0CLK and MCGPLL0CLK2X are disabled in any of the Stop modes.
            v1=0x00000001,     ///<MCGPLL0CLK and MCGPLL0CLK2X are enabled if system is in Normal Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pllsten0Val> pllsten0{}; 
        namespace Pllsten0ValC{
            constexpr Register::FieldValue<decltype(pllsten0)::Type,Pllsten0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pllsten0)::Type,Pllsten0Val::v1> v1{};
        }
        ///PLL Clock Enable
        enum class Pllclken0Val {
            v0=0x00000000,     ///<MCGPLL0CLK and MCGPLL0CLK2X are inactive.
            v1=0x00000001,     ///<MCGPLL0CLK and MCGPLL0CLK2X are active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pllclken0Val> pllclken0{}; 
        namespace Pllclken0ValC{
            constexpr Register::FieldValue<decltype(pllclken0)::Type,Pllclken0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pllclken0)::Type,Pllclken0Val::v1> v1{};
        }
        ///PLL0 External Reference Select
        enum class Pllrefsel0Val {
            v0=0x00000000,     ///<Selects OSC0 clock source as its external reference clock.
            v1=0x00000001,     ///<Selects OSC1 clock source as its external reference clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pllrefsel0Val> pllrefsel0{}; 
        namespace Pllrefsel0ValC{
            constexpr Register::FieldValue<decltype(pllrefsel0)::Type,Pllrefsel0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pllrefsel0)::Type,Pllrefsel0Val::v1> v1{};
        }
    }
    namespace McgC6{    ///<MCG Control 6 Register
        using Addr = Register::Address<0x40064005,0xffffff00,0x00000000,unsigned char>;
        ///VCO0 Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> vdiv0{}; 
        ///Clock Monitor Enable
        enum class Cme0Val {
            v0=0x00000000,     ///<External clock monitor is disabled for OSC0.
            v1=0x00000001,     ///<External clock monitor is enabled for OSC0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Cme0Val> cme0{}; 
        namespace Cme0ValC{
            constexpr Register::FieldValue<decltype(cme0)::Type,Cme0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(cme0)::Type,Cme0Val::v1> v1{};
        }
        ///PLL Select
        enum class PllsVal {
            v0=0x00000000,     ///<FLL is selected.
            v1=0x00000001,     ///<PLLCS output clock is selected (PRDIV0 bits of PLL in control need to be programmed to the correct divider to generate a PLL reference clock in the range of 1 - 32 MHz prior to setting the PLLS bit).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PllsVal> plls{}; 
        namespace PllsValC{
            constexpr Register::FieldValue<decltype(plls)::Type,PllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(plls)::Type,PllsVal::v1> v1{};
        }
        ///Loss of Lock Interrrupt Enable
        enum class Lolie0Val {
            v0=0x00000000,     ///<No interrupt request is generated on loss of lock.
            v1=0x00000001,     ///<Generate an interrupt request on loss of lock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Lolie0Val> lolie0{}; 
        namespace Lolie0ValC{
            constexpr Register::FieldValue<decltype(lolie0)::Type,Lolie0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(lolie0)::Type,Lolie0Val::v1> v1{};
        }
    }
    namespace McgS{    ///<MCG Status Register
        using Addr = Register::Address<0x40064006,0xffffff00,0x00000000,unsigned char>;
        ///Internal Reference Clock Status
        enum class IrcstVal {
            v0=0x00000000,     ///<Source of internal reference clock is the slow clock (32 kHz IRC).
            v1=0x00000001,     ///<Source of internal reference clock is the fast clock (2 MHz IRC).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IrcstVal> ircst{}; 
        namespace IrcstValC{
            constexpr Register::FieldValue<decltype(ircst)::Type,IrcstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ircst)::Type,IrcstVal::v1> v1{};
        }
        ///OSC Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscinit0{}; 
        ///Clock Mode Status
        enum class ClkstVal {
            v00=0x00000000,     ///<Encoding 0 - Output of the FLL is selected (reset default).
            v01=0x00000001,     ///<Encoding 1 - Internal reference clock is selected.
            v10=0x00000002,     ///<Encoding 2 - External reference clock is selected.
            v11=0x00000003,     ///<Encoding 3 - Output of the PLL is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ClkstVal> clkst{}; 
        namespace ClkstValC{
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v10> v10{};
            constexpr Register::FieldValue<decltype(clkst)::Type,ClkstVal::v11> v11{};
        }
        ///Internal Reference Status
        enum class IrefstVal {
            v0=0x00000000,     ///<Source of FLL reference clock is the external reference clock.
            v1=0x00000001,     ///<Source of FLL reference clock is the internal reference clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IrefstVal> irefst{}; 
        namespace IrefstValC{
            constexpr Register::FieldValue<decltype(irefst)::Type,IrefstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irefst)::Type,IrefstVal::v1> v1{};
        }
        ///PLL Select Status
        enum class PllstVal {
            v0=0x00000000,     ///<Source of PLLS clock is FLL clock.
            v1=0x00000001,     ///<Source of PLLS clock is PLLCS output clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PllstVal> pllst{}; 
        namespace PllstValC{
            constexpr Register::FieldValue<decltype(pllst)::Type,PllstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pllst)::Type,PllstVal::v1> v1{};
        }
        ///Lock Status
        enum class Lock0Val {
            v0=0x00000000,     ///<PLL is currently unlocked.
            v1=0x00000001,     ///<PLL is currently locked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Lock0Val> lock0{}; 
        namespace Lock0ValC{
            constexpr Register::FieldValue<decltype(lock0)::Type,Lock0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(lock0)::Type,Lock0Val::v1> v1{};
        }
        ///Loss of Lock Status
        enum class Lols0Val {
            v0=0x00000000,     ///<PLL has not lost lock since LOLS 0 was last cleared.
            v1=0x00000001,     ///<PLL has lost lock since LOLS 0 was last cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Lols0Val> lols0{}; 
        namespace Lols0ValC{
            constexpr Register::FieldValue<decltype(lols0)::Type,Lols0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(lols0)::Type,Lols0Val::v1> v1{};
        }
    }
    namespace McgSc{    ///<MCG Status and Control Register
        using Addr = Register::Address<0x40064008,0xffffff00,0x00000000,unsigned char>;
        ///OSC0 Loss of Clock Status
        enum class Locs0Val {
            v0=0x00000000,     ///<Loss of OSC0 has not occurred.
            v1=0x00000001,     ///<Loss of OSC0 has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Locs0Val> locs0{}; 
        namespace Locs0ValC{
            constexpr Register::FieldValue<decltype(locs0)::Type,Locs0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(locs0)::Type,Locs0Val::v1> v1{};
        }
        ///Fast Clock Internal Reference Divider
        enum class FcrdivVal {
            v000=0x00000000,     ///<Divide Factor is 1
            v001=0x00000001,     ///<Divide Factor is 2.
            v010=0x00000002,     ///<Divide Factor is 4.
            v011=0x00000003,     ///<Divide Factor is 8.
            v100=0x00000004,     ///<Divide Factor is 16
            v101=0x00000005,     ///<Divide Factor is 32
            v110=0x00000006,     ///<Divide Factor is 64
            v111=0x00000007,     ///<Divide Factor is 128.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,FcrdivVal> fcrdiv{}; 
        namespace FcrdivValC{
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v000> v000{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v001> v001{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v010> v010{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v011> v011{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v100> v100{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v101> v101{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v110> v110{};
            constexpr Register::FieldValue<decltype(fcrdiv)::Type,FcrdivVal::v111> v111{};
        }
        ///FLL Filter Preserve Enable
        enum class FltprsrvVal {
            v0=0x00000000,     ///<FLL filter and FLL frequency will reset on changes to currect clock mode.
            v1=0x00000001,     ///<Fll filter and FLL frequency retain their previous values during new clock mode change.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FltprsrvVal> fltprsrv{}; 
        namespace FltprsrvValC{
            constexpr Register::FieldValue<decltype(fltprsrv)::Type,FltprsrvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fltprsrv)::Type,FltprsrvVal::v1> v1{};
        }
        ///Automatic Trim machine Fail Flag
        enum class AtmfVal {
            v0=0x00000000,     ///<Automatic Trim Machine completed normally.
            v1=0x00000001,     ///<Automatic Trim Machine failed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,AtmfVal> atmf{}; 
        namespace AtmfValC{
            constexpr Register::FieldValue<decltype(atmf)::Type,AtmfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(atmf)::Type,AtmfVal::v1> v1{};
        }
        ///Automatic Trim Machine Select
        enum class AtmsVal {
            v0=0x00000000,     ///<32 kHz Internal Reference Clock selected.
            v1=0x00000001,     ///<4 MHz Internal Reference Clock selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AtmsVal> atms{}; 
        namespace AtmsValC{
            constexpr Register::FieldValue<decltype(atms)::Type,AtmsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(atms)::Type,AtmsVal::v1> v1{};
        }
        ///Automatic Trim Machine Enable
        enum class AtmeVal {
            v0=0x00000000,     ///<Auto Trim Machine disabled.
            v1=0x00000001,     ///<Auto Trim Machine enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AtmeVal> atme{}; 
        namespace AtmeValC{
            constexpr Register::FieldValue<decltype(atme)::Type,AtmeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(atme)::Type,AtmeVal::v1> v1{};
        }
    }
    namespace McgAtcvh{    ///<MCG Auto Trim Compare Value High Register
        using Addr = Register::Address<0x4006400a,0xffffff00,0x00000000,unsigned char>;
        ///ATM Compare Value High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> atcvh{}; 
    }
    namespace McgAtcvl{    ///<MCG Auto Trim Compare Value Low Register
        using Addr = Register::Address<0x4006400b,0xffffff00,0x00000000,unsigned char>;
        ///ATM Compare Value Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> atcvl{}; 
    }
    namespace McgC7{    ///<MCG Control 7 Register
        using Addr = Register::Address<0x4006400c,0xffffff00,0x00000000,unsigned char>;
        ///MCG OSC Clock Select
        enum class OscselVal {
            v0=0x00000000,     ///<Selects System Oscillator (OSCCLK).
            v1=0x00000001,     ///<Selects 32 kHz RTC Oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OscselVal> oscsel{}; 
        namespace OscselValC{
            constexpr Register::FieldValue<decltype(oscsel)::Type,OscselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oscsel)::Type,OscselVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace McgC8{    ///<MCG Control 8 Register
        using Addr = Register::Address<0x4006400d,0xffffff00,0x00000000,unsigned char>;
        ///RTC Loss of Clock Status
        enum class Locs1Val {
            v0=0x00000000,     ///<Loss of RTC has not occur.
            v1=0x00000001,     ///<Loss of RTC has occur
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Locs1Val> locs1{}; 
        namespace Locs1ValC{
            constexpr Register::FieldValue<decltype(locs1)::Type,Locs1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(locs1)::Type,Locs1Val::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Clock Monitor Enable1
        enum class Cme1Val {
            v0=0x00000000,     ///<External clock monitor is disabled for RTC clock.
            v1=0x00000001,     ///<External clock monitor is enabled for RTC clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Cme1Val> cme1{}; 
        namespace Cme1ValC{
            constexpr Register::FieldValue<decltype(cme1)::Type,Cme1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(cme1)::Type,Cme1Val::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Loss of Clock Reset Enable
        enum class Locre1Val {
            v0=0x00000000,     ///<Interrupt request is generated on a loss of RTC external reference clock.
            v1=0x00000001,     ///<Generate a reset request on a loss of RTC external reference clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Locre1Val> locre1{}; 
        namespace Locre1ValC{
            constexpr Register::FieldValue<decltype(locre1)::Type,Locre1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(locre1)::Type,Locre1Val::v1> v1{};
        }
    }
    namespace McgC10{    ///<MCG Control 10 Register
        using Addr = Register::Address<0x4006400f,0xffffff00,0x00000000,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///External Reference Select
        enum class Erefs1Val {
            v0=0x00000000,     ///<External reference clock requested.
            v1=0x00000001,     ///<Oscillator requested.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Erefs1Val> erefs1{}; 
        namespace Erefs1ValC{
            constexpr Register::FieldValue<decltype(erefs1)::Type,Erefs1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(erefs1)::Type,Erefs1Val::v1> v1{};
        }
        ///High Gain Oscillator1 Select
        enum class Hgo1Val {
            v0=0x00000000,     ///<Configure crystal oscillator for low-power operation.
            v1=0x00000001,     ///<Configure crystal oscillator for high-gain operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Hgo1Val> hgo1{}; 
        namespace Hgo1ValC{
            constexpr Register::FieldValue<decltype(hgo1)::Type,Hgo1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(hgo1)::Type,Hgo1Val::v1> v1{};
        }
        ///Frequency Range1 Select
        enum class Range1Val {
            v00=0x00000000,     ///<Encoding 0 - Low frequency range selected for the crystal oscillator .
            v01=0x00000001,     ///<Encoding 1 - High frequency range selected for the crystal oscillator .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Range1Val> range1{}; 
        namespace Range1ValC{
            constexpr Register::FieldValue<decltype(range1)::Type,Range1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(range1)::Type,Range1Val::v01> v01{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///OSC1 Loss of Clock Reset Enable
        enum class Locre2Val {
            v0=0x00000000,     ///<Interrupt request is generated on a loss of OSC1 external reference clock.
            v1=0x00000001,     ///<Reset request is generated on a loss of OSC1 external reference clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Locre2Val> locre2{}; 
        namespace Locre2ValC{
            constexpr Register::FieldValue<decltype(locre2)::Type,Locre2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(locre2)::Type,Locre2Val::v1> v1{};
        }
    }
    namespace McgC11{    ///<MCG Control 11 Register
        using Addr = Register::Address<0x40064010,0xffffff00,0x00000000,unsigned char>;
        ///PLL1 External Reference Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> prdiv1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///PLL Clock Select
        enum class PllcsVal {
            v0=0x00000000,     ///<PLL0 output clock is selected.
            v1=0x00000001,     ///<PLL1 output clock is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PllcsVal> pllcs{}; 
        namespace PllcsValC{
            constexpr Register::FieldValue<decltype(pllcs)::Type,PllcsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pllcs)::Type,PllcsVal::v1> v1{};
        }
        ///PLL1 Stop Enable
        enum class Pllsten1Val {
            v0=0x00000000,     ///<PLL1 clocks (MCGPLL1CLK, MCGPLL1CLK2X, and MCGDDRCLK2X) are disabled in any of the Stop modes.
            v1=0x00000001,     ///<PLL1 and its clocks (MCGPLL1CLK, MCGPLL1CLK2X, and MCGDDRCLK2X) are enabled if system is in Normal Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pllsten1Val> pllsten1{}; 
        namespace Pllsten1ValC{
            constexpr Register::FieldValue<decltype(pllsten1)::Type,Pllsten1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pllsten1)::Type,Pllsten1Val::v1> v1{};
        }
        ///PLL1 Clock Enable
        enum class Pllclken1Val {
            v0=0x00000000,     ///<MCGPLL1CLK, MCGPLL1CLK2X, and MCGDDRCLK2X are inactive
            v1=0x00000001,     ///<MCGPLL1CLK, MCGPLL1CLK2X, and MCGDDRCLK2X are active unless MCG is in a bypass mode with LP=1 (BLPI or BLPE).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pllclken1Val> pllclken1{}; 
        namespace Pllclken1ValC{
            constexpr Register::FieldValue<decltype(pllclken1)::Type,Pllclken1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pllclken1)::Type,Pllclken1Val::v1> v1{};
        }
        ///PLL1 External Reference Select
        enum class Pllrefsel1Val {
            v0=0x00000000,     ///<Selects OSC0 clock source as its external reference clock.
            v1=0x00000001,     ///<Selects OSC1 clock source as its external reference clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pllrefsel1Val> pllrefsel1{}; 
        namespace Pllrefsel1ValC{
            constexpr Register::FieldValue<decltype(pllrefsel1)::Type,Pllrefsel1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pllrefsel1)::Type,Pllrefsel1Val::v1> v1{};
        }
    }
    namespace McgC12{    ///<MCG Control 12 Register
        using Addr = Register::Address<0x40064011,0xffffff00,0x00000000,unsigned char>;
        ///VCO1 Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> vdiv1{}; 
        ///Clock Monitor Enable2
        enum class Cme2Val {
            v0=0x00000000,     ///<External clock monitor for OSC1 is disabled.
            v1=0x00000001,     ///<Generate a reset request on loss of external clock on OSC1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Cme2Val> cme2{}; 
        namespace Cme2ValC{
            constexpr Register::FieldValue<decltype(cme2)::Type,Cme2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(cme2)::Type,Cme2Val::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///PLL1 Loss of Lock Interrupt Enable
        enum class Lolie1Val {
            v0=0x00000000,     ///<No interrupt request is generated on loss of lock on PLL1.
            v1=0x00000001,     ///<Generate an interrupt request on loss of lock on PLL1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Lolie1Val> lolie1{}; 
        namespace Lolie1ValC{
            constexpr Register::FieldValue<decltype(lolie1)::Type,Lolie1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(lolie1)::Type,Lolie1Val::v1> v1{};
        }
    }
    namespace McgS2{    ///<MCG Status 2 Register
        using Addr = Register::Address<0x40064012,0xffffff00,0x00000000,unsigned char>;
        ///OSC1 Loss of Clock Status
        enum class Locs2Val {
            v0=0x00000000,     ///<No loss of OSC1 external reference clock has occurred.
            v1=0x00000001,     ///<Loss of OSC1 external reference clock has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Locs2Val> locs2{}; 
        namespace Locs2ValC{
            constexpr Register::FieldValue<decltype(locs2)::Type,Locs2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(locs2)::Type,Locs2Val::v1> v1{};
        }
        ///OSC1 Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscinit1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///PLL Clock Select Status
        enum class PllcstVal {
            v0=0x00000000,     ///<Source of PLLCS is PLL0 clock.
            v1=0x00000001,     ///<Source of PLLCS is PLL1 clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PllcstVal> pllcst{}; 
        namespace PllcstValC{
            constexpr Register::FieldValue<decltype(pllcst)::Type,PllcstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pllcst)::Type,PllcstVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Lock1 Status
        enum class Lock1Val {
            v0=0x00000000,     ///<PLL1 is currently unlocked.
            v1=0x00000001,     ///<PLL1 is currently locked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Lock1Val> lock1{}; 
        namespace Lock1ValC{
            constexpr Register::FieldValue<decltype(lock1)::Type,Lock1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(lock1)::Type,Lock1Val::v1> v1{};
        }
        ///Loss of Lock2 Status
        enum class Lols1Val {
            v0=0x00000000,     ///<PLL1 has not lost lock since LOLS1 was last cleared.
            v1=0x00000001,     ///<PLL1 has lost lock since LOLS1 was last cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Lols1Val> lols1{}; 
        namespace Lols1ValC{
            constexpr Register::FieldValue<decltype(lols1)::Type,Lols1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(lols1)::Type,Lols1Val::v1> v1{};
        }
    }
}
