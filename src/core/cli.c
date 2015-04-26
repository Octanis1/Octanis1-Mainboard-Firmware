/*
 *  File: cli.c
 *  Description: Provides a command line interface and offers possibility to register function as new command
 *  Author:
 */
#include "cli.h"

//which uart index to use for the CLI
#define CLI_UART 0
//buffer to fill before data goes out
#define CLI_BUFFER 512
//max number of commands
#define CLI_MAXCOMMANDS 10

static void* cli_commands[CLI_MAXCOMMANDS][2];


void cli_init(){


}

//register a command line command here. will be called when "commandstring [argument]" was typed into cli.
void cli_register_command(void (*command_cb)(char*), char* commandstring){

}

//runs with lowest priority
void cli_task(){

}
