cmake_minimum_required(VERSION 3.0)

include_directories(
        vendor/mile-crypto/include
        vendor/mile-crypto/src/private_include
        vendor/mile-crypto/src/ed25519/include
)
add_subdirectory(vendor/mile-crypto)

add_executable(random_first src/random_first.cpp)
add_executable(random_full src/random_full.cpp)

target_link_libraries(random_first mile_crypto)
target_link_libraries(random_full mile_crypto)