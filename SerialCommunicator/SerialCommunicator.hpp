#ifndef SERIALCOMMUNICATOR_HPP
# define SERIALCOMMUNICATOR_HPP

#include "Arduino.h"

class SerialCommunicator
{
	public:
		/* Constructor  */
		SerialCommunicator(int rx, int tx, int baudrate);

		/* Destructor */
		virtual ~SerialCommunicator();

		// Methods

		/**
		 * @brief Sends a message to the serial buffer.
		 * 
		 * @param message string to send to the serial buffer.
		 */
		void sendToSerial(String message);

		/**
		 * @brief Reads the serial buffer and returns the data as a string.
		 * 
		 * @return std::string 
		 */
		std::string readFromSerial();

		/**
		 * @brief Clears the serial buffer by reading all the data in it.
		 * 
		 */
		void clearSerial();
	private:
		SoftwareSerial _serial;
		int _rx;
		int _tx;
		int _baudrate;
};

#endif // SERIALCOMMUNICATOR_HPP