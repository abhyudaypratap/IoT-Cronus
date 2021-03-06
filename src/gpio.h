// Copyright 2016 Ilya Albrekht
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GPIO_H
#define GPIO_H

class GpioRelay
{
public:
	GpioRelay(int GpioPIN); //: is_on(false), pin_id(GpioPIN);
	~GpioRelay();

	bool GetStatus() { return is_on; };

	int  SetStatus(bool on);
	int  GetPin() { return pin_id; }

	void Start() { SetStatus(true);  }
	void Stop()  { SetStatus(false); }

private:
	bool is_on;

	int   pin_id;
	void *handler;
};

#endif

