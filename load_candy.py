#!/usr/bin/env python
from django.core.management import setup_environ
import settings

setup_environ(settings)

from picker import models

f = open("candy.csv")
count=0
for line in f:
    if count==0:
        count=count+1
        continue
    line=line.strip()
    p = line.split(",")
    i=0
    while i < len(p):
        if p[i] == "NO":
            p[i] = False
        elif p[i] == "YES":
            p[i] = True
        i=i+1
    c = models.Candy(name=p[9],
         kosher=p[0],
         milk=p[1],
         dark=p[3],
         white=p[8],
         sugarfree=p[2],
         sugar=p[4],
         nuts=p[5],
         peanuts=p[6],
         vegetarian=p[7],
         vegan=False)
    c.save()
    