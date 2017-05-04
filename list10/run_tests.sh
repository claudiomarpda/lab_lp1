#!/bin/sh

EX01BIN=/Exercise01/tests
EX02BIN=/Exercise02/tests
EX03BIN=/Exercise03/tests

echo "----- Exception handling -----\n"
echo "----- Running Exercise 01: Number validation -----\n"
./$EX01BIN
echo 
read -p "Press any key to continue..." unused_variable

echo "----- Running Exercise 02: Bank accounts -----\n"
./$EX02BIN
echo 
read -p "Press any key to continue..." unused_variable

echo "----- Running Exercise 03: Employees-----\n"
./$EX03BIN
echo 
read -p "Press any key to continue..." unused_variablem 	