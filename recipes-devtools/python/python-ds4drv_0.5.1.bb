inherit setuptools
require python-ds4drv.inc

# Fetch package directly from github since the package name hosted on pythonhosted.org
#   as a weird name and so it is not downloadable with pypi.bbclass (as of march 2018).
PYPI_SRC_URI = "https://github.com/chrippa/ds4drv/archive/v0.5.1.tar.gz"

