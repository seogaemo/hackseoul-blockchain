#include <eosio/eosio.hpp>
using namespace eosio;

CONTRACT hackseoul : public contract {
   public:
      using contract::contract;

      struct pipeline {
         /* data */
      };
      


      using hi_action = action_wrapper<"hi"_n, &hackseoul::hi>;
};