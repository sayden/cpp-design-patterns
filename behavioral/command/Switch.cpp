//
// Created by mariocaster on 2/28/16.
//

#include "Command.h"

class Switch {
public:
	Switch(Command& flipUpCmd, Command& flipDownCmd)
	:flipUpCommand(flipUpCmd),flipDownCommand(flipDownCmd) {}

	void flipUp() {
		flipUpCommand.execute();
	}

	void flipDown() {
		flipDownCommand.execute();
	}

private:
	Command& flipUpCommand;
	Command& flipDownCommand;
};
