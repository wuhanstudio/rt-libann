from building import *
import rtconfig

# get current directory
cwd     = GetCurrentDir()
# The set of source files associated with this SConscript file.
src     = Glob('src/*.c')

if GetDepend('LIBANN_USING_IRIS_LOAD_AND_PREDICT'):
	src    += Glob('examples/iris_load_and_predict.c')

if GetDepend('LIBANN_USING_IRIS_TRAIN_AND_PREDICT'):
	src    += Glob('examples/iris_load_and_predict.c')

path   = [cwd + '/src']

LOCAL_CCFLAGS = ''

group = DefineGroup('libann', src, depend = ['PKG_USING_LIBANN'], CPPPATH = path, LOCAL_CCFLAGS = LOCAL_CCFLAGS)

Return('group')