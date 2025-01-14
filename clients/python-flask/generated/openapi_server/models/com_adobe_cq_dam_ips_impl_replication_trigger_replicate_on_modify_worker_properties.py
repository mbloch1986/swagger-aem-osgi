# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, dmreplicateonmodify_enabled: ConfigNodePropertyBoolean=None, dmreplicateonmodify_forcesyncdeletes: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties - a model defined in OpenAPI

        :param dmreplicateonmodify_enabled: The dmreplicateonmodify_enabled of this ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties.  # noqa: E501
        :type dmreplicateonmodify_enabled: ConfigNodePropertyBoolean
        :param dmreplicateonmodify_forcesyncdeletes: The dmreplicateonmodify_forcesyncdeletes of this ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties.  # noqa: E501
        :type dmreplicateonmodify_forcesyncdeletes: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'dmreplicateonmodify_enabled': ConfigNodePropertyBoolean,
            'dmreplicateonmodify_forcesyncdeletes': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'dmreplicateonmodify_enabled': 'dmreplicateonmodify.enabled',
            'dmreplicateonmodify_forcesyncdeletes': 'dmreplicateonmodify.forcesyncdeletes'
        }

        self._dmreplicateonmodify_enabled = dmreplicateonmodify_enabled
        self._dmreplicateonmodify_forcesyncdeletes = dmreplicateonmodify_forcesyncdeletes

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties of this ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties.  # noqa: E501
        :rtype: ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def dmreplicateonmodify_enabled(self) -> ConfigNodePropertyBoolean:
        """Gets the dmreplicateonmodify_enabled of this ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties.


        :return: The dmreplicateonmodify_enabled of this ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._dmreplicateonmodify_enabled

    @dmreplicateonmodify_enabled.setter
    def dmreplicateonmodify_enabled(self, dmreplicateonmodify_enabled: ConfigNodePropertyBoolean):
        """Sets the dmreplicateonmodify_enabled of this ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties.


        :param dmreplicateonmodify_enabled: The dmreplicateonmodify_enabled of this ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties.
        :type dmreplicateonmodify_enabled: ConfigNodePropertyBoolean
        """

        self._dmreplicateonmodify_enabled = dmreplicateonmodify_enabled

    @property
    def dmreplicateonmodify_forcesyncdeletes(self) -> ConfigNodePropertyBoolean:
        """Gets the dmreplicateonmodify_forcesyncdeletes of this ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties.


        :return: The dmreplicateonmodify_forcesyncdeletes of this ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._dmreplicateonmodify_forcesyncdeletes

    @dmreplicateonmodify_forcesyncdeletes.setter
    def dmreplicateonmodify_forcesyncdeletes(self, dmreplicateonmodify_forcesyncdeletes: ConfigNodePropertyBoolean):
        """Sets the dmreplicateonmodify_forcesyncdeletes of this ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties.


        :param dmreplicateonmodify_forcesyncdeletes: The dmreplicateonmodify_forcesyncdeletes of this ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties.
        :type dmreplicateonmodify_forcesyncdeletes: ConfigNodePropertyBoolean
        """

        self._dmreplicateonmodify_forcesyncdeletes = dmreplicateonmodify_forcesyncdeletes
