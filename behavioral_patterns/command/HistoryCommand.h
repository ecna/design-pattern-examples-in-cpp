// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_COMMAND_HISTORYCOMMAND_H_
#define BEHAVIORAL_PATTERNS_COMMAND_HISTORYCOMMAND_H_

// ˅
#include <vector>
#include <memory>
#include "behavioral_patterns/command/Command.h"

using namespace std;

// ˄

// Holder of the past commands
class HistoryCommand : public Command
{
	// ˅
	
	// ˄

private:

	// A set of past commands
	vector<shared_ptr<Command>> past_commands;

public:

	HistoryCommand();

	~HistoryCommand();

	void execute();

	void add(shared_ptr<Command> cmd);

	// Delete the last command
	void undo();

	// Delete all past commands.
	void clear();

	// ˅
public:
	
protected:
	
private:
	HistoryCommand(const HistoryCommand&) = delete;
	HistoryCommand& operator=(const HistoryCommand&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_COMMAND_HISTORYCOMMAND_H_

// ˅

// ˄
