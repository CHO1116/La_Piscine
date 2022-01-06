#!/bin/sh

ifconfig | grep '\teth' | awk '{print $2}'
