# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqReportingImplConfigServiceImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, repconf_timezone: ConfigNodePropertyString=None, repconf_locale: ConfigNodePropertyString=None, repconf_snapshots: ConfigNodePropertyString=None, repconf_repdir: ConfigNodePropertyString=None, repconf_hourofday: ConfigNodePropertyInteger=None, repconf_minofhour: ConfigNodePropertyInteger=None, repconf_maxrows: ConfigNodePropertyInteger=None, repconf_fakedata: ConfigNodePropertyBoolean=None, repconf_snapshotuser: ConfigNodePropertyString=None, repconf_enforcesnapshotuser: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComDayCqReportingImplConfigServiceImplProperties - a model defined in OpenAPI

        :param repconf_timezone: The repconf_timezone of this ComDayCqReportingImplConfigServiceImplProperties.  # noqa: E501
        :type repconf_timezone: ConfigNodePropertyString
        :param repconf_locale: The repconf_locale of this ComDayCqReportingImplConfigServiceImplProperties.  # noqa: E501
        :type repconf_locale: ConfigNodePropertyString
        :param repconf_snapshots: The repconf_snapshots of this ComDayCqReportingImplConfigServiceImplProperties.  # noqa: E501
        :type repconf_snapshots: ConfigNodePropertyString
        :param repconf_repdir: The repconf_repdir of this ComDayCqReportingImplConfigServiceImplProperties.  # noqa: E501
        :type repconf_repdir: ConfigNodePropertyString
        :param repconf_hourofday: The repconf_hourofday of this ComDayCqReportingImplConfigServiceImplProperties.  # noqa: E501
        :type repconf_hourofday: ConfigNodePropertyInteger
        :param repconf_minofhour: The repconf_minofhour of this ComDayCqReportingImplConfigServiceImplProperties.  # noqa: E501
        :type repconf_minofhour: ConfigNodePropertyInteger
        :param repconf_maxrows: The repconf_maxrows of this ComDayCqReportingImplConfigServiceImplProperties.  # noqa: E501
        :type repconf_maxrows: ConfigNodePropertyInteger
        :param repconf_fakedata: The repconf_fakedata of this ComDayCqReportingImplConfigServiceImplProperties.  # noqa: E501
        :type repconf_fakedata: ConfigNodePropertyBoolean
        :param repconf_snapshotuser: The repconf_snapshotuser of this ComDayCqReportingImplConfigServiceImplProperties.  # noqa: E501
        :type repconf_snapshotuser: ConfigNodePropertyString
        :param repconf_enforcesnapshotuser: The repconf_enforcesnapshotuser of this ComDayCqReportingImplConfigServiceImplProperties.  # noqa: E501
        :type repconf_enforcesnapshotuser: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'repconf_timezone': ConfigNodePropertyString,
            'repconf_locale': ConfigNodePropertyString,
            'repconf_snapshots': ConfigNodePropertyString,
            'repconf_repdir': ConfigNodePropertyString,
            'repconf_hourofday': ConfigNodePropertyInteger,
            'repconf_minofhour': ConfigNodePropertyInteger,
            'repconf_maxrows': ConfigNodePropertyInteger,
            'repconf_fakedata': ConfigNodePropertyBoolean,
            'repconf_snapshotuser': ConfigNodePropertyString,
            'repconf_enforcesnapshotuser': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'repconf_timezone': 'repconf.timezone',
            'repconf_locale': 'repconf.locale',
            'repconf_snapshots': 'repconf.snapshots',
            'repconf_repdir': 'repconf.repdir',
            'repconf_hourofday': 'repconf.hourofday',
            'repconf_minofhour': 'repconf.minofhour',
            'repconf_maxrows': 'repconf.maxrows',
            'repconf_fakedata': 'repconf.fakedata',
            'repconf_snapshotuser': 'repconf.snapshotuser',
            'repconf_enforcesnapshotuser': 'repconf.enforcesnapshotuser'
        }

        self._repconf_timezone = repconf_timezone
        self._repconf_locale = repconf_locale
        self._repconf_snapshots = repconf_snapshots
        self._repconf_repdir = repconf_repdir
        self._repconf_hourofday = repconf_hourofday
        self._repconf_minofhour = repconf_minofhour
        self._repconf_maxrows = repconf_maxrows
        self._repconf_fakedata = repconf_fakedata
        self._repconf_snapshotuser = repconf_snapshotuser
        self._repconf_enforcesnapshotuser = repconf_enforcesnapshotuser

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqReportingImplConfigServiceImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqReportingImplConfigServiceImplProperties of this ComDayCqReportingImplConfigServiceImplProperties.  # noqa: E501
        :rtype: ComDayCqReportingImplConfigServiceImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def repconf_timezone(self) -> ConfigNodePropertyString:
        """Gets the repconf_timezone of this ComDayCqReportingImplConfigServiceImplProperties.


        :return: The repconf_timezone of this ComDayCqReportingImplConfigServiceImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._repconf_timezone

    @repconf_timezone.setter
    def repconf_timezone(self, repconf_timezone: ConfigNodePropertyString):
        """Sets the repconf_timezone of this ComDayCqReportingImplConfigServiceImplProperties.


        :param repconf_timezone: The repconf_timezone of this ComDayCqReportingImplConfigServiceImplProperties.
        :type repconf_timezone: ConfigNodePropertyString
        """

        self._repconf_timezone = repconf_timezone

    @property
    def repconf_locale(self) -> ConfigNodePropertyString:
        """Gets the repconf_locale of this ComDayCqReportingImplConfigServiceImplProperties.


        :return: The repconf_locale of this ComDayCqReportingImplConfigServiceImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._repconf_locale

    @repconf_locale.setter
    def repconf_locale(self, repconf_locale: ConfigNodePropertyString):
        """Sets the repconf_locale of this ComDayCqReportingImplConfigServiceImplProperties.


        :param repconf_locale: The repconf_locale of this ComDayCqReportingImplConfigServiceImplProperties.
        :type repconf_locale: ConfigNodePropertyString
        """

        self._repconf_locale = repconf_locale

    @property
    def repconf_snapshots(self) -> ConfigNodePropertyString:
        """Gets the repconf_snapshots of this ComDayCqReportingImplConfigServiceImplProperties.


        :return: The repconf_snapshots of this ComDayCqReportingImplConfigServiceImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._repconf_snapshots

    @repconf_snapshots.setter
    def repconf_snapshots(self, repconf_snapshots: ConfigNodePropertyString):
        """Sets the repconf_snapshots of this ComDayCqReportingImplConfigServiceImplProperties.


        :param repconf_snapshots: The repconf_snapshots of this ComDayCqReportingImplConfigServiceImplProperties.
        :type repconf_snapshots: ConfigNodePropertyString
        """

        self._repconf_snapshots = repconf_snapshots

    @property
    def repconf_repdir(self) -> ConfigNodePropertyString:
        """Gets the repconf_repdir of this ComDayCqReportingImplConfigServiceImplProperties.


        :return: The repconf_repdir of this ComDayCqReportingImplConfigServiceImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._repconf_repdir

    @repconf_repdir.setter
    def repconf_repdir(self, repconf_repdir: ConfigNodePropertyString):
        """Sets the repconf_repdir of this ComDayCqReportingImplConfigServiceImplProperties.


        :param repconf_repdir: The repconf_repdir of this ComDayCqReportingImplConfigServiceImplProperties.
        :type repconf_repdir: ConfigNodePropertyString
        """

        self._repconf_repdir = repconf_repdir

    @property
    def repconf_hourofday(self) -> ConfigNodePropertyInteger:
        """Gets the repconf_hourofday of this ComDayCqReportingImplConfigServiceImplProperties.


        :return: The repconf_hourofday of this ComDayCqReportingImplConfigServiceImplProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._repconf_hourofday

    @repconf_hourofday.setter
    def repconf_hourofday(self, repconf_hourofday: ConfigNodePropertyInteger):
        """Sets the repconf_hourofday of this ComDayCqReportingImplConfigServiceImplProperties.


        :param repconf_hourofday: The repconf_hourofday of this ComDayCqReportingImplConfigServiceImplProperties.
        :type repconf_hourofday: ConfigNodePropertyInteger
        """

        self._repconf_hourofday = repconf_hourofday

    @property
    def repconf_minofhour(self) -> ConfigNodePropertyInteger:
        """Gets the repconf_minofhour of this ComDayCqReportingImplConfigServiceImplProperties.


        :return: The repconf_minofhour of this ComDayCqReportingImplConfigServiceImplProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._repconf_minofhour

    @repconf_minofhour.setter
    def repconf_minofhour(self, repconf_minofhour: ConfigNodePropertyInteger):
        """Sets the repconf_minofhour of this ComDayCqReportingImplConfigServiceImplProperties.


        :param repconf_minofhour: The repconf_minofhour of this ComDayCqReportingImplConfigServiceImplProperties.
        :type repconf_minofhour: ConfigNodePropertyInteger
        """

        self._repconf_minofhour = repconf_minofhour

    @property
    def repconf_maxrows(self) -> ConfigNodePropertyInteger:
        """Gets the repconf_maxrows of this ComDayCqReportingImplConfigServiceImplProperties.


        :return: The repconf_maxrows of this ComDayCqReportingImplConfigServiceImplProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._repconf_maxrows

    @repconf_maxrows.setter
    def repconf_maxrows(self, repconf_maxrows: ConfigNodePropertyInteger):
        """Sets the repconf_maxrows of this ComDayCqReportingImplConfigServiceImplProperties.


        :param repconf_maxrows: The repconf_maxrows of this ComDayCqReportingImplConfigServiceImplProperties.
        :type repconf_maxrows: ConfigNodePropertyInteger
        """

        self._repconf_maxrows = repconf_maxrows

    @property
    def repconf_fakedata(self) -> ConfigNodePropertyBoolean:
        """Gets the repconf_fakedata of this ComDayCqReportingImplConfigServiceImplProperties.


        :return: The repconf_fakedata of this ComDayCqReportingImplConfigServiceImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._repconf_fakedata

    @repconf_fakedata.setter
    def repconf_fakedata(self, repconf_fakedata: ConfigNodePropertyBoolean):
        """Sets the repconf_fakedata of this ComDayCqReportingImplConfigServiceImplProperties.


        :param repconf_fakedata: The repconf_fakedata of this ComDayCqReportingImplConfigServiceImplProperties.
        :type repconf_fakedata: ConfigNodePropertyBoolean
        """

        self._repconf_fakedata = repconf_fakedata

    @property
    def repconf_snapshotuser(self) -> ConfigNodePropertyString:
        """Gets the repconf_snapshotuser of this ComDayCqReportingImplConfigServiceImplProperties.


        :return: The repconf_snapshotuser of this ComDayCqReportingImplConfigServiceImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._repconf_snapshotuser

    @repconf_snapshotuser.setter
    def repconf_snapshotuser(self, repconf_snapshotuser: ConfigNodePropertyString):
        """Sets the repconf_snapshotuser of this ComDayCqReportingImplConfigServiceImplProperties.


        :param repconf_snapshotuser: The repconf_snapshotuser of this ComDayCqReportingImplConfigServiceImplProperties.
        :type repconf_snapshotuser: ConfigNodePropertyString
        """

        self._repconf_snapshotuser = repconf_snapshotuser

    @property
    def repconf_enforcesnapshotuser(self) -> ConfigNodePropertyBoolean:
        """Gets the repconf_enforcesnapshotuser of this ComDayCqReportingImplConfigServiceImplProperties.


        :return: The repconf_enforcesnapshotuser of this ComDayCqReportingImplConfigServiceImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._repconf_enforcesnapshotuser

    @repconf_enforcesnapshotuser.setter
    def repconf_enforcesnapshotuser(self, repconf_enforcesnapshotuser: ConfigNodePropertyBoolean):
        """Sets the repconf_enforcesnapshotuser of this ComDayCqReportingImplConfigServiceImplProperties.


        :param repconf_enforcesnapshotuser: The repconf_enforcesnapshotuser of this ComDayCqReportingImplConfigServiceImplProperties.
        :type repconf_enforcesnapshotuser: ConfigNodePropertyBoolean
        """

        self._repconf_enforcesnapshotuser = repconf_enforcesnapshotuser
