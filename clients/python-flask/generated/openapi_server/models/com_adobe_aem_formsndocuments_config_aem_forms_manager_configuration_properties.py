# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server import util


class ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, forms_manager_config_include_ootb_templates: ConfigNodePropertyBoolean=None, forms_manager_config_include_deprecated_templates: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties - a model defined in OpenAPI

        :param forms_manager_config_include_ootb_templates: The forms_manager_config_include_ootb_templates of this ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties.  # noqa: E501
        :type forms_manager_config_include_ootb_templates: ConfigNodePropertyBoolean
        :param forms_manager_config_include_deprecated_templates: The forms_manager_config_include_deprecated_templates of this ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties.  # noqa: E501
        :type forms_manager_config_include_deprecated_templates: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'forms_manager_config_include_ootb_templates': ConfigNodePropertyBoolean,
            'forms_manager_config_include_deprecated_templates': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'forms_manager_config_include_ootb_templates': 'formsManagerConfig.includeOOTBTemplates',
            'forms_manager_config_include_deprecated_templates': 'formsManagerConfig.includeDeprecatedTemplates'
        }

        self._forms_manager_config_include_ootb_templates = forms_manager_config_include_ootb_templates
        self._forms_manager_config_include_deprecated_templates = forms_manager_config_include_deprecated_templates

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties of this ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties.  # noqa: E501
        :rtype: ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def forms_manager_config_include_ootb_templates(self) -> ConfigNodePropertyBoolean:
        """Gets the forms_manager_config_include_ootb_templates of this ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties.


        :return: The forms_manager_config_include_ootb_templates of this ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._forms_manager_config_include_ootb_templates

    @forms_manager_config_include_ootb_templates.setter
    def forms_manager_config_include_ootb_templates(self, forms_manager_config_include_ootb_templates: ConfigNodePropertyBoolean):
        """Sets the forms_manager_config_include_ootb_templates of this ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties.


        :param forms_manager_config_include_ootb_templates: The forms_manager_config_include_ootb_templates of this ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties.
        :type forms_manager_config_include_ootb_templates: ConfigNodePropertyBoolean
        """

        self._forms_manager_config_include_ootb_templates = forms_manager_config_include_ootb_templates

    @property
    def forms_manager_config_include_deprecated_templates(self) -> ConfigNodePropertyBoolean:
        """Gets the forms_manager_config_include_deprecated_templates of this ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties.


        :return: The forms_manager_config_include_deprecated_templates of this ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._forms_manager_config_include_deprecated_templates

    @forms_manager_config_include_deprecated_templates.setter
    def forms_manager_config_include_deprecated_templates(self, forms_manager_config_include_deprecated_templates: ConfigNodePropertyBoolean):
        """Sets the forms_manager_config_include_deprecated_templates of this ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties.


        :param forms_manager_config_include_deprecated_templates: The forms_manager_config_include_deprecated_templates of this ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties.
        :type forms_manager_config_include_deprecated_templates: ConfigNodePropertyBoolean
        """

        self._forms_manager_config_include_deprecated_templates = forms_manager_config_include_deprecated_templates