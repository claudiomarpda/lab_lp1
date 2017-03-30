/**
 * Represents a television with the following functionalities:
 * - setting volume and channel up and down
 * - choosing a channel directly by its number
 */

#ifndef LIST06_02_TELEVISION_H
#define LIST06_02_TELEVISION_H

const unsigned int MAX_VOLUME = 50;
const unsigned int MIN_VOLUME = 1;
const unsigned int MAX_CHANNEL = 100;
const unsigned int MIN_CHANNEL = 1;
const unsigned int INITIAL_VOLUME = (MAX_VOLUME / 5); // 20% of maximum

class Television {

private:
    unsigned int volume;
    unsigned int channel;

public:

    Television();

    void volumeUp();

    void volumeDown();

    void channelUp();

    void channelDown();

    void setChannel(unsigned int channel);

    unsigned int getVolume() const;

    unsigned int getChannel() const;
};


#endif //LIST06_02_TELEVISION_H
