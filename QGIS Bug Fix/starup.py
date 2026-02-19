import sys
import io
import os

def fix_stdio():
    if sys.stderr is None or not hasattr(sys.stderr, 'write'):
        sys.stderr = io.StringIO()
    if sys.stdout is None or not hasattr(sys.stdout, 'write'):
        sys.stdout = io.StringIO()
    os.environ['NUMPY_EXPERIMENTAL_ARRAY_FUNCTION'] = '0'

fix_stdio()