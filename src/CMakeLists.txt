cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(libp2p)

add_library(libp2p STATIC 
   net/dialer.cpp
)

target_include_directories( libp2p PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}
   ${CMAKE_CURRENT_SOURCE_DIR}/../libraries
)

install(TARGETS libp2p DESTINATION lib)
install(FILES crypto/private_key.hpp
   net/dialer.hpp
   net/peer.hpp
   net/swarm.hpp
   net/tcp_dialer.hpp
   storage/peer_store.hpp
   DESTINATION include)