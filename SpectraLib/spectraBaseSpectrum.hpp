/*-----------------------------------------------------------------------------

 Copyright 2017 Hopsan Group

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.


 The full license is available in the file LICENSE.
 For details about the 'Hopsan Group' or information about Authors and
 Contributors see the HOPSANGROUP and AUTHORS files that are located in
 the Hopsan source code root directory.

-----------------------------------------------------------------------------*/

#ifndef SPECTRABASESPECTRUM_HPP_INCLUDED
#define SPECTRABASESPECTRUM_HPP_INCLUDED

#include <math.h>
#include "ComponentEssentials.h"
#include "ComponentUtilities.h"
#include <sstream>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

namespace hopsan {

    class spectraBaseSpectrum : public ComponentSignal
    {
    private:                         // Private section
        //Declare local variables
        double mType;
        double mSeed;
        double Ws;
        double Signal;

        //Declare data pointer variables
        double *mpWs, *mpSignal;

        //Declare ports
        

    public:                              //Public section
        static Component *Creator()
        {
            return new spectraBaseSpectrum();
        }
        
        //Configure
        void configure()
        {
            //Register constants
            addConstant("Type", "Type of Spectrum", "", 0, mType);
            addConstant("Seed", "Generator Seed", "", 0, mSeed);

            //Add ports
            addInputVariable("Ws", "Wind Speed", "m/s", 0, &mpWs);
            addOutputVariable("Signal", "Output Signal", "", 0, &mpSignal);

            //Configuration code
            
        }
        
        //Initialize
        void initialize()
        {
            //Initialize variables
            

            //Get data pointers
            

            //Read input variables
            Ws = (*mpWs);
            Signal = (*mpSignal);

            //Initialization code
            

            //Write output variables
            (*mpSignal) = Signal;
        }

        //Simulate one time step
        void simulateOneTimestep()
        {
            //Read input variables
            Ws = (*mpWs);
            Signal = (*mpSignal);

            //Simulation code
            

            //Write output variables
            (*mpSignal) = Signal;
        }

        //Finalize
        void finalize()
        {
            //Finalize code
            
        }

        //Finalize
        void deconfigure()
        {
            //Deconfigure code
            
        }

        //Auxiliary functions
        
    };
}

#endif // SPECTRABASESPECTRUM_HPP_INCLUDED
