#!/bin/sh

EX01BIN=/Exercise01/tests
EX02BIN=/Exercise02/tests

echo "----- Running Exercise 01: Bank Accounts -----\n"
./$EX01BIN
echo 
read -p "Press any key to continue..." unused_variable

echo "----- Running Exercise 02: Properties -----\n"
./$EX02BIN
echo 
read -p "Press any key to continue..." unused_variable