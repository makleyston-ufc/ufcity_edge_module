//
// Created by makleyston on 12/08/22.
//

#ifndef UFCITY_OBSERVER_H
#define UFCITY_OBSERVER_H

#include <string>

namespace ufcity {

    class observer {

    public:

        /**
         * Update the state of this observer
         * @param temp new temperaure
         * @param humidity new humidity
         * @param pressure new pressure
         */
        virtual void update(std::string command) = 0;


    };

} // ufcity

#endif //UFCITY_OBSERVER_H
