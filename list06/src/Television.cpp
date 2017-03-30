#include <iostream>
#include "Television.h"

/**
 * Initializes channel and volume with a standard for all instances.
 */
Television::Television() {
    this->channel = MIN_CHANNEL;
    this->volume = INITIAL_VOLUME;
}

void Television::volumeUp() {
    if(volume < MAX_VOLUME) {
        volume++;
    }
}

void Television::volumeDown() {
    if(volume > MIN_VOLUME) {
        volume--;
    }
}

void Television::channelUp() {
    if(channel == MAX_CHANNEL) {
        channel = MIN_CHANNEL;
    }
    else {
        channel++;
    }
}

void Television::channelDown() {
    if(channel == MIN_CHANNEL) {
        channel = MAX_CHANNEL;
    }
    else {
        channel--;
    }
}

void Television::setChannel(unsigned int channel) {
    this->channel = channel;
}

unsigned int Television::getVolume() const {
    return volume;
}

unsigned int Television::getChannel() const {
    return channel;
}

