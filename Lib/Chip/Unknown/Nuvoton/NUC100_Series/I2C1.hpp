#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace I2c1I2con{    ///<I2C Control Register
        using Addr = Register::Address<0x40120000,0xffffff0b,0x00000000,unsigned>;
        ///Assert Acknowledge Control BitWhen AA=1 prior to address or data received, an acknowledged (low level to SDA) will be returned during the acknowledge clock pulse on the SCL line when 1.) A slave is acknowledging the address sent from master, 2.) The receiver devices are acknowledging the data sent by transmitter. When AA=0 prior to address or data received, a Not acknowledged (high level to SDA) will be returned during the acknowledge clock pulse on the SCL line.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aa{}; 
        ///I2C Interrupt FlagWhen a new I2C state is present in the I2CSTATUS register, the SI flag is set by hardware, and if bit EI (I2CON [7]) is set, the I2C interrupt is requested. SI must be cleared by software. Clear SI is by writing 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> si{}; 
        ///I2C STOP Control BitIn master mode, setting STO to transmit a STOP condition to bus then I2C hardware will check the bus condition if a STOP condition is detected this bit will be cleared by hardware automatically. In a slave mode, setting STO resets I2C hardware to the defined "not addressed" slave mode. This means it is NO LONGER in the slave receiver mode to receive data from the master transmit device.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sto{}; 
        ///I2C START Control BitSetting STA to logic 1 to enter master mode, the I2C hardware sends a START or repeat START condition to bus when the bus is free.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sta{}; 
        ///I2C Controller Enable Bit1 = Enable0 = DisableSet to enable I2C serial function block. When ENSI=1 the I2C serial function enables. The multi-function pin function of SDA and SCL must set to I2C function first.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ensi{}; 
        ///Enable Interrupt1 = Enable I2C interrupt0 = Disable I2C interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ei{}; 
    }
    namespace I2c1I2caddr0{    ///<I2C Slave Address Register0
        using Addr = Register::Address<0x40120004,0xffffff00,0x00000000,unsigned>;
        ///General Call Function0 = Disable General Call Function.1 = Enable General Call Function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gc{}; 
        ///I2C Address registerThe content of this register is irrelevant when I2C is in master mode. In the slave mode, the seven most significant bits must be loaded with the MCU's own address. The I2C hardware will react if either of the address is matched.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2caddr{}; 
    }
    namespace I2c1I2cdat{    ///<I2C Data Register
        using Addr = Register::Address<0x40120008,0xffffff00,0x00000000,unsigned>;
        ///I2C Data RegisterBit[7:0] is located with the 8-bit transferred data of I2C serial port. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> i2cdat{}; 
    }
    namespace I2c1I2cstatus{    ///<I2C Status Register
        using Addr = Register::Address<0x4012000c,0xffffff00,0x00000000,unsigned>;
        ///I2C Status Register The status register of I2C:The three least significant bits are always 0. The five most significant bits contain the status code. There are 26 possible status codes. When I2STATUS contains F8H, no serial interrupt is requested. All other I2CSTATUS values correspond to defined I2C states. When each of these states is entered, a status interrupt is requested (SI = 1). A valid status code is present in I2CSTATUS one machine cycle after SI is set by hardware and is still present one machine cycle after SI has been reset by software. In addition, states 00H stands for a Bus Error. A Bus Error occurs when a START or STOP condition is present at an illegal position in the formation frame. Example of illegal position are during the serial transfer of an address byte, a data byte or an acknowledge bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> i2cstatus{}; 
    }
    namespace I2c1I2clk{    ///<I2C Clock Divided Register
        using Addr = Register::Address<0x40120010,0xffffff00,0x00000000,unsigned>;
        ///I2C Clock Divided RegisterThe I2C clock rate bits: Data Baud Rate of I2C = system clock /(4x(I2CLK+1)).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> i2clk{}; 
    }
    namespace I2c1I2ctoc{    ///<I2C Time-Out Control Register
        using Addr = Register::Address<0x40120014,0xfffffff9,0x00000000,unsigned>;
        ///Time-Out Flag1 = Time-Out falg is set by H/W. It can interrupt CPU.0 = S/W can clear the flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> tif{}; 
        ///Time-Out counter input clock is divided by 41 = Enable0 = DisableWhen Enable, The time-Out period is extend 4 times.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> div4{}; 
        ///Time-out counter is enabled/disable1 = Enable0 = DisableWhen Enable, the 14 bit time-out counter will start counting when SI is clear. Setting flag SI to high will reset counter and re-start up counting after SI is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enti{}; 
    }
    namespace I2c1I2caddr1{    ///<I2C Slave address Register1
        using Addr = Register::Address<0x40120018,0xffffff00,0x00000000,unsigned>;
        ///General Call Function0 = Disable General Call Function.1 = Enable General Call Function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gc{}; 
        ///I2C Address registerThe content of this register is irrelevant when I2C is in master mode. In the slave mode, the seven most significant bits must be loaded with the MCU's own address. The I2C hardware will react if either of the address is matched.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2caddr{}; 
    }
    namespace I2c1I2caddr2{    ///<I2C Slave address Register2
        using Addr = Register::Address<0x4012001c,0xffffff00,0x00000000,unsigned>;
        ///General Call Function0 = Disable General Call Function.1 = Enable General Call Function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gc{}; 
        ///I2C Address registerThe content of this register is irrelevant when I2C is in master mode. In the slave mode, the seven most significant bits must be loaded with the MCU's own address. The I2C hardware will react if either of the address is matched.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2caddr{}; 
    }
    namespace I2c1I2caddr3{    ///<I2C Slave address Register3
        using Addr = Register::Address<0x40120020,0xffffff00,0x00000000,unsigned>;
        ///General Call Function0 = Disable General Call Function.1 = Enable General Call Function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gc{}; 
        ///I2C Address registerThe content of this register is irrelevant when I2C is in master mode. In the slave mode, the seven most significant bits must be loaded with the MCU's own address. The I2C hardware will react if either of the address is matched.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2caddr{}; 
    }
    namespace I2c1I2cadm0{    ///<I2C Slave Address Mask Register0
        using Addr = Register::Address<0x40120024,0xffffff01,0x00000000,unsigned>;
        ///I2C Address Mask register1 = Mask enable (the received corresponding address bit is don't care.)0 = Mask disable (the received corresponding register bit should be exact the same as address register.) I2C bus controllers support multiple address recognition with four address mask reg. When the bit in the address mask register is set to one, it means the received corresponding address bit is don't-care. If the bit is set to zero, that means the received corresponding register bit should be exact the same as address register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2cadm{}; 
    }
    namespace I2c1I2cadm1{    ///<I2C Slave Address Mask Register1
        using Addr = Register::Address<0x40120028,0xffffff01,0x00000000,unsigned>;
        ///I2C Address Mask register1 = Mask enable (the received corresponding address bit is don't care.)0 = Mask disable (the received corresponding register bit should be exact the same as address register.) I2C bus controllers support multiple address recognition with four address mask reg. When the bit in the address mask register is set to one, it means the received corresponding address bit is don't-care. If the bit is set to zero, that means the received corresponding register bit should be exact the same as address register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2cadm{}; 
    }
    namespace I2c1I2cadm2{    ///<I2C Slave Address Mask Register2
        using Addr = Register::Address<0x4012002c,0xffffff01,0x00000000,unsigned>;
        ///I2C Address Mask register1 = Mask enable (the received corresponding address bit is don't care.)0 = Mask disable (the received corresponding register bit should be exact the same as address register.) I2C bus controllers support multiple address recognition with four address mask reg. When the bit in the address mask register is set to one, it means the received corresponding address bit is don't-care. If the bit is set to zero, that means the received corresponding register bit should be exact the same as address register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2cadm{}; 
    }
    namespace I2c1I2cadm3{    ///<I2C Slave Address Mask Register3
        using Addr = Register::Address<0x40120030,0xffffff01,0x00000000,unsigned>;
        ///I2C Address Mask register1 = Mask enable (the received corresponding address bit is don't care.)0 = Mask disable (the received corresponding register bit should be exact the same as address register.) I2C bus controllers support multiple address recognition with four address mask reg. When the bit in the address mask register is set to one, it means the received corresponding address bit is don't-care. If the bit is set to zero, that means the received corresponding register bit should be exact the same as address register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> i2cadm{}; 
    }
}
