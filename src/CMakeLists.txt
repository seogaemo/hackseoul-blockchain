project(hackseoul)

set(EOSIO_WASM_OLD_BEHAVIOR "Off")
find_package(eosio.cdt)

add_contract( hackseoul hackseoul hackseoul.cpp )
target_include_directories( hackseoul PUBLIC ${CMAKE_SOURCE_DIR}/../include )
target_ricardian_directory( hackseoul ${CMAKE_SOURCE_DIR}/../ricardian )