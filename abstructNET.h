#pragma once
#include <cstring>

class abstructNET
{
private:
	char mac_address[17];

public:
	abstructNET(char* mac_address) {
		if (strlen(mac_address) == 12)
		{
			for (int i = 0; i < 12; i++)
			{
				this->mac_address[i] = mac_address[i];
					if (i % 2 == 1)
					{
						this->mac_address[i + 1] = ':';
					}
			}
		}
	}
};

