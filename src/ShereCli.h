//
// ShereCli.h
// author: Marek Foltýn (marek@foltynovi.cz)
// created: 2017-10-25
//

#pragma once

/**
 * Shere command line application class
 */
class ShereCli
{
public:

    /**
     * Run command line process
     * @param argc argument count
     * @param argv argument vector
     * @return process return code
     */
    int run(int argc, char ** argv);

};