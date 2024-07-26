TEMPLATE = subdirs

SUBDIRS += \
    App \
    ProjectA

ProjectA.depends = App
