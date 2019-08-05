# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server import util


class ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, codeupgradetasks: ConfigNodePropertyArray=None, codeupgradetaskfilters: ConfigNodePropertyArray=None):  # noqa: E501
        """ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties - a model defined in OpenAPI

        :param codeupgradetasks: The codeupgradetasks of this ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties.  # noqa: E501
        :type codeupgradetasks: ConfigNodePropertyArray
        :param codeupgradetaskfilters: The codeupgradetaskfilters of this ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties.  # noqa: E501
        :type codeupgradetaskfilters: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'codeupgradetasks': ConfigNodePropertyArray,
            'codeupgradetaskfilters': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'codeupgradetasks': 'codeupgradetasks',
            'codeupgradetaskfilters': 'codeupgradetaskfilters'
        }

        self._codeupgradetasks = codeupgradetasks
        self._codeupgradetaskfilters = codeupgradetaskfilters

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties of this ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties.  # noqa: E501
        :rtype: ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def codeupgradetasks(self) -> ConfigNodePropertyArray:
        """Gets the codeupgradetasks of this ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties.


        :return: The codeupgradetasks of this ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._codeupgradetasks

    @codeupgradetasks.setter
    def codeupgradetasks(self, codeupgradetasks: ConfigNodePropertyArray):
        """Sets the codeupgradetasks of this ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties.


        :param codeupgradetasks: The codeupgradetasks of this ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties.
        :type codeupgradetasks: ConfigNodePropertyArray
        """

        self._codeupgradetasks = codeupgradetasks

    @property
    def codeupgradetaskfilters(self) -> ConfigNodePropertyArray:
        """Gets the codeupgradetaskfilters of this ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties.


        :return: The codeupgradetaskfilters of this ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._codeupgradetaskfilters

    @codeupgradetaskfilters.setter
    def codeupgradetaskfilters(self, codeupgradetaskfilters: ConfigNodePropertyArray):
        """Sets the codeupgradetaskfilters of this ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties.


        :param codeupgradetaskfilters: The codeupgradetaskfilters of this ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties.
        :type codeupgradetaskfilters: ConfigNodePropertyArray
        """

        self._codeupgradetaskfilters = codeupgradetaskfilters