TEMPLATE = subdirs

SUBDIRS += \
    proB \
    app \
    proA

app.subdir = App
proA.subdir = ProjectA
proB.subdir = ProjectB
proA.depends = app proB
proB.depends =
app
