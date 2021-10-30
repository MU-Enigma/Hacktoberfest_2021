#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Oct 29 21:56:36 2021

@author: likhitgannarapu
"""

n = int(input())
for i in range(n):
    t = input()
    swap_t = t.swapcase()
    rev_swap_t= swap_t[::-1]
    print(rev_swap_t)
