import serial
import time
import Crc

serPort = serial.Serial('COM6', baudrate=115200)

TxData = [0x01, 0x02, 0x03]

TxData.append(Crc.Crc_Cal(TxData, 3))

print(TxData)
for i in TxData:
    print(i)
    serPort.write(i.to_bytes(1, 'big'))
    time.sleep(0.01)



serPort.close()


