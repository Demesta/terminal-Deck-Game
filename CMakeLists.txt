cmake_minimum_required(VERSION 3.15)
project(cpp_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_project main.cpp DeckBuilder.cpp Card.cpp Personality.cpp BlackCard.cpp Holding.cpp GreenCard.cpp Follower.cpp Item.cpp GameBoard.cpp Player.cpp Player.h)