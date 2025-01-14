# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class ComDayCqDamScene7ImplScene7UploadServiceImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, cq_dam_scene7_uploadservice_activejobtimeout_label: ConfigNodePropertyInteger=None, cq_dam_scene7_uploadservice_connectionmaxperroute_label: ConfigNodePropertyInteger=None):  # noqa: E501
        """ComDayCqDamScene7ImplScene7UploadServiceImplProperties - a model defined in OpenAPI

        :param cq_dam_scene7_uploadservice_activejobtimeout_label: The cq_dam_scene7_uploadservice_activejobtimeout_label of this ComDayCqDamScene7ImplScene7UploadServiceImplProperties.  # noqa: E501
        :type cq_dam_scene7_uploadservice_activejobtimeout_label: ConfigNodePropertyInteger
        :param cq_dam_scene7_uploadservice_connectionmaxperroute_label: The cq_dam_scene7_uploadservice_connectionmaxperroute_label of this ComDayCqDamScene7ImplScene7UploadServiceImplProperties.  # noqa: E501
        :type cq_dam_scene7_uploadservice_connectionmaxperroute_label: ConfigNodePropertyInteger
        """
        self.openapi_types = {
            'cq_dam_scene7_uploadservice_activejobtimeout_label': ConfigNodePropertyInteger,
            'cq_dam_scene7_uploadservice_connectionmaxperroute_label': ConfigNodePropertyInteger
        }

        self.attribute_map = {
            'cq_dam_scene7_uploadservice_activejobtimeout_label': 'cq.dam.scene7.uploadservice.activejobtimeout.label',
            'cq_dam_scene7_uploadservice_connectionmaxperroute_label': 'cq.dam.scene7.uploadservice.connectionmaxperroute.label'
        }

        self._cq_dam_scene7_uploadservice_activejobtimeout_label = cq_dam_scene7_uploadservice_activejobtimeout_label
        self._cq_dam_scene7_uploadservice_connectionmaxperroute_label = cq_dam_scene7_uploadservice_connectionmaxperroute_label

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqDamScene7ImplScene7UploadServiceImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqDamScene7ImplScene7UploadServiceImplProperties of this ComDayCqDamScene7ImplScene7UploadServiceImplProperties.  # noqa: E501
        :rtype: ComDayCqDamScene7ImplScene7UploadServiceImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def cq_dam_scene7_uploadservice_activejobtimeout_label(self) -> ConfigNodePropertyInteger:
        """Gets the cq_dam_scene7_uploadservice_activejobtimeout_label of this ComDayCqDamScene7ImplScene7UploadServiceImplProperties.


        :return: The cq_dam_scene7_uploadservice_activejobtimeout_label of this ComDayCqDamScene7ImplScene7UploadServiceImplProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._cq_dam_scene7_uploadservice_activejobtimeout_label

    @cq_dam_scene7_uploadservice_activejobtimeout_label.setter
    def cq_dam_scene7_uploadservice_activejobtimeout_label(self, cq_dam_scene7_uploadservice_activejobtimeout_label: ConfigNodePropertyInteger):
        """Sets the cq_dam_scene7_uploadservice_activejobtimeout_label of this ComDayCqDamScene7ImplScene7UploadServiceImplProperties.


        :param cq_dam_scene7_uploadservice_activejobtimeout_label: The cq_dam_scene7_uploadservice_activejobtimeout_label of this ComDayCqDamScene7ImplScene7UploadServiceImplProperties.
        :type cq_dam_scene7_uploadservice_activejobtimeout_label: ConfigNodePropertyInteger
        """

        self._cq_dam_scene7_uploadservice_activejobtimeout_label = cq_dam_scene7_uploadservice_activejobtimeout_label

    @property
    def cq_dam_scene7_uploadservice_connectionmaxperroute_label(self) -> ConfigNodePropertyInteger:
        """Gets the cq_dam_scene7_uploadservice_connectionmaxperroute_label of this ComDayCqDamScene7ImplScene7UploadServiceImplProperties.


        :return: The cq_dam_scene7_uploadservice_connectionmaxperroute_label of this ComDayCqDamScene7ImplScene7UploadServiceImplProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._cq_dam_scene7_uploadservice_connectionmaxperroute_label

    @cq_dam_scene7_uploadservice_connectionmaxperroute_label.setter
    def cq_dam_scene7_uploadservice_connectionmaxperroute_label(self, cq_dam_scene7_uploadservice_connectionmaxperroute_label: ConfigNodePropertyInteger):
        """Sets the cq_dam_scene7_uploadservice_connectionmaxperroute_label of this ComDayCqDamScene7ImplScene7UploadServiceImplProperties.


        :param cq_dam_scene7_uploadservice_connectionmaxperroute_label: The cq_dam_scene7_uploadservice_connectionmaxperroute_label of this ComDayCqDamScene7ImplScene7UploadServiceImplProperties.
        :type cq_dam_scene7_uploadservice_connectionmaxperroute_label: ConfigNodePropertyInteger
        """

        self._cq_dam_scene7_uploadservice_connectionmaxperroute_label = cq_dam_scene7_uploadservice_connectionmaxperroute_label
