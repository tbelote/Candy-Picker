import models
import random
from django.shortcuts import get_object_or_404, render_to_response

r = random.random

def preferences(request):
    return render_to_response('preferences.html')
    
def results(request):
    random.shuffle(models.candies)
    c = models.candies[:12]
    return render_to_response('results.html', {'candies':c})
