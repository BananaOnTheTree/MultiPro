TEMPLATE = subdirs

SUBDIRS += \
    app \
    proA

app.subdir = App
proA.subdir = ProjectA
proA.depends = app
