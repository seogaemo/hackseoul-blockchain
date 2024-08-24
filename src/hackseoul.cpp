#include <eosio/eosio.hpp>

struct [[eosio::table("txrec"), eosio::contract("hackseoul")]] txrec
{
    uint64_t id = {};

    uint64_t primary_key() const { return id; }
};

using node_table = eosio::multi_index<"pipeline"_n, txrec>;

class hackseoul : eosio::contract
{
public:
    using contract::contract;

    [[eosio::action]] void trdycompnay(
        std::string uid,
        std::string name,
        std::string owner,
        std::string owner_photo,
        std::string phone,
        std::string address,
        std::string license_number,
        std::string business_Number,
        std::string created_at)
    {
        node_table table{get_self(), 0};

        table.emplace(get_self(), [&](auto &pipeline)
                      { pipeline.id = table.available_primary_key(); });
    }

    [[eosio::action]] void trdyproduct(
        std::string uid,
        std::string title,
        std::string company_id,
        std::string created_at)
    {
        node_table table{get_self(), 0};

        table.emplace(get_self(), [&](auto &pipeline)
                      { pipeline.id = table.available_primary_key(); });
    }

    [[eosio::action]] void trdyproditem(
        std::string uid,
        std::string title,
        std::string product_id,
        std::string model_number,
        std::string created_at)
    {
        node_table table{get_self(), 0};

        table.emplace(get_self(), [&](auto &pipeline)
                      { pipeline.id = table.available_primary_key(); });
    }

    [[eosio::action]] void trdypipeline(
        std::string uid,
        std::string title,
        std::string description,
        std::string company_id,
        std::string product_item_id,
        std::string created_at)
    {
        node_table table{get_self(), 0};

        table.emplace(get_self(), [&](auto &pipeline)
                      { pipeline.id = table.available_primary_key(); });
    }
};