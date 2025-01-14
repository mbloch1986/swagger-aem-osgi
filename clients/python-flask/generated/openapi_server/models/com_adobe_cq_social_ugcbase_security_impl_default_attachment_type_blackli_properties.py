# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, default_attachment_type_blacklist: ConfigNodePropertyArray=None, baseline_attachment_type_blacklist: ConfigNodePropertyArray=None):  # noqa: E501
        """ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties - a model defined in OpenAPI

        :param default_attachment_type_blacklist: The default_attachment_type_blacklist of this ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties.  # noqa: E501
        :type default_attachment_type_blacklist: ConfigNodePropertyArray
        :param baseline_attachment_type_blacklist: The baseline_attachment_type_blacklist of this ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties.  # noqa: E501
        :type baseline_attachment_type_blacklist: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'default_attachment_type_blacklist': ConfigNodePropertyArray,
            'baseline_attachment_type_blacklist': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'default_attachment_type_blacklist': 'default.attachment.type.blacklist',
            'baseline_attachment_type_blacklist': 'baseline.attachment.type.blacklist'
        }

        self._default_attachment_type_blacklist = default_attachment_type_blacklist
        self._baseline_attachment_type_blacklist = baseline_attachment_type_blacklist

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties of this ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties.  # noqa: E501
        :rtype: ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def default_attachment_type_blacklist(self) -> ConfigNodePropertyArray:
        """Gets the default_attachment_type_blacklist of this ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties.


        :return: The default_attachment_type_blacklist of this ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._default_attachment_type_blacklist

    @default_attachment_type_blacklist.setter
    def default_attachment_type_blacklist(self, default_attachment_type_blacklist: ConfigNodePropertyArray):
        """Sets the default_attachment_type_blacklist of this ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties.


        :param default_attachment_type_blacklist: The default_attachment_type_blacklist of this ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties.
        :type default_attachment_type_blacklist: ConfigNodePropertyArray
        """

        self._default_attachment_type_blacklist = default_attachment_type_blacklist

    @property
    def baseline_attachment_type_blacklist(self) -> ConfigNodePropertyArray:
        """Gets the baseline_attachment_type_blacklist of this ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties.


        :return: The baseline_attachment_type_blacklist of this ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._baseline_attachment_type_blacklist

    @baseline_attachment_type_blacklist.setter
    def baseline_attachment_type_blacklist(self, baseline_attachment_type_blacklist: ConfigNodePropertyArray):
        """Sets the baseline_attachment_type_blacklist of this ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties.


        :param baseline_attachment_type_blacklist: The baseline_attachment_type_blacklist of this ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties.
        :type baseline_attachment_type_blacklist: ConfigNodePropertyArray
        """

        self._baseline_attachment_type_blacklist = baseline_attachment_type_blacklist
