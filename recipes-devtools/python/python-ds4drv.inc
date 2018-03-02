SUMMARY = "ds4drv"
DESCRIPTION = ""
HOMEPAGE = "https://github.com/chrippa/ds4drv"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI[md5sum] = "5a116106debdaaaed138d337282e1985"
SRC_URI[sha256sum] = "da6841c17af0fc019abfe9e65d3f2a6fab3ced40294dc7391dc3e954e04479f8"

inherit pypi

RDEPENDS_${PN} += " \
	${PYTHON_PN}-evdev \
	${PYTHON_PN}-pyudev \ 
"
