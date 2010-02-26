from django.conf.urls.defaults import *
import os
import picker.views
import settings
# Uncomment the next two lines to enable the admin:
# from django.contrib import admin
# admin.autodiscover()

urlpatterns = patterns('',
    (r'^m/(?P<path>.*)$', 'django.views.static.serve',
     {'document_root': os.path.join(settings.PROJECT_PATH, "media") }),
    (r'^/?$',picker.views.index),
    (r'^results/?$',picker.views.results),
    # Example:
    # (r'^candypicker/', include('candypicker.foo.urls')),

    # Uncomment the admin/doc line below and add 'django.contrib.admindocs' 
    # to INSTALLED_APPS to enable admin documentation:
    # (r'^admin/doc/', include('django.contrib.admindocs.urls')),

    # Uncomment the next line to enable the admin:
    # (r'^admin/', include(admin.site.urls)),
)
