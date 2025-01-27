# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqDamCfmImplContentRewriterParRangeFilterProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pipeline_type: ConfigNodePropertyString=None):  # noqa: E501
        """ComAdobeCqDamCfmImplContentRewriterParRangeFilterProperties - a model defined in OpenAPI

        :param pipeline_type: The pipeline_type of this ComAdobeCqDamCfmImplContentRewriterParRangeFilterProperties.  # noqa: E501
        :type pipeline_type: ConfigNodePropertyString
        """
        self.openapi_types = {
            'pipeline_type': ConfigNodePropertyString
        }

        self.attribute_map = {
            'pipeline_type': 'pipeline.type'
        }

        self._pipeline_type = pipeline_type

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqDamCfmImplContentRewriterParRangeFilterProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqDamCfmImplContentRewriterParRangeFilterProperties of this ComAdobeCqDamCfmImplContentRewriterParRangeFilterProperties.  # noqa: E501
        :rtype: ComAdobeCqDamCfmImplContentRewriterParRangeFilterProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pipeline_type(self) -> ConfigNodePropertyString:
        """Gets the pipeline_type of this ComAdobeCqDamCfmImplContentRewriterParRangeFilterProperties.


        :return: The pipeline_type of this ComAdobeCqDamCfmImplContentRewriterParRangeFilterProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._pipeline_type

    @pipeline_type.setter
    def pipeline_type(self, pipeline_type: ConfigNodePropertyString):
        """Sets the pipeline_type of this ComAdobeCqDamCfmImplContentRewriterParRangeFilterProperties.


        :param pipeline_type: The pipeline_type of this ComAdobeCqDamCfmImplContentRewriterParRangeFilterProperties.
        :type pipeline_type: ConfigNodePropertyString
        """

        self._pipeline_type = pipeline_type
