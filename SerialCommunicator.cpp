#include "SerialCommunicator.hpp"

SerialCommunicator::SerialCommunicator(int rx, int tx, int baudrate)
{
	_rx = rx;
	_tx = tx;
	_baudrate = baudrate;
  this->_serial = new SoftwareSerial(rx, tx);
}