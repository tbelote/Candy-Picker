from django.db import models

class Candy(models.Model):
    name = models.CharField(max_length=255)
    kosher = models.BooleanField(default=False)
    milk = models.BooleanField(default=False)
    dark = models.BooleanField(default=False)
    white = models.BooleanField(default=False)
    sugarfree = models.BooleanField(default=False)
    sugar = models.BooleanField(default=False)
    nuts = models.BooleanField(default=False)
    peanuts  = models.BooleanField(default=False)
    vegetarian = models.BooleanField(default=False)
    vegan = models.BooleanField(default=False)

class CandyFavorite(models.Model):
    candy = models.ForeignKey(Candy)
    username = models.CharField(max_length=80,db_index=True)
    
candies = list(Candy.objects.all())