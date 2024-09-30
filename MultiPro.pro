TEMPLATE = subdirs

SUBDIRS += \
    ex_timer_export \
    proB \
    app \
    proA

app.subdir = App
proA.subdir = ProjectA
proB.subdir = ProjectB
proA.depends = app proB
proB.depends = app

message(HELLO)
