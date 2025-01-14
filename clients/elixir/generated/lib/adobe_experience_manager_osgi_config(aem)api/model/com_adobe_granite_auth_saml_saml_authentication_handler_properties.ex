# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"path",
    :"service.ranking",
    :"idpUrl",
    :"idpCertAlias",
    :"idpHttpRedirect",
    :"serviceProviderEntityId",
    :"assertionConsumerServiceURL",
    :"spPrivateKeyAlias",
    :"keyStorePassword",
    :"defaultRedirectUrl",
    :"userIDAttribute",
    :"useEncryption",
    :"createUser",
    :"userIntermediatePath",
    :"addGroupMemberships",
    :"groupMembershipAttribute",
    :"defaultGroups",
    :"nameIdFormat",
    :"synchronizeAttributes",
    :"handleLogout",
    :"logoutUrl",
    :"clockTolerance",
    :"digestMethod",
    :"signatureMethod",
    :"identitySyncType",
    :"idpIdentifier"
  ]

  @type t :: %__MODULE__{
    :"path" => ConfigNodePropertyArray,
    :"service.ranking" => ConfigNodePropertyInteger,
    :"idpUrl" => ConfigNodePropertyString,
    :"idpCertAlias" => ConfigNodePropertyString,
    :"idpHttpRedirect" => ConfigNodePropertyBoolean,
    :"serviceProviderEntityId" => ConfigNodePropertyString,
    :"assertionConsumerServiceURL" => ConfigNodePropertyString,
    :"spPrivateKeyAlias" => ConfigNodePropertyString,
    :"keyStorePassword" => ConfigNodePropertyString,
    :"defaultRedirectUrl" => ConfigNodePropertyString,
    :"userIDAttribute" => ConfigNodePropertyString,
    :"useEncryption" => ConfigNodePropertyBoolean,
    :"createUser" => ConfigNodePropertyBoolean,
    :"userIntermediatePath" => ConfigNodePropertyString,
    :"addGroupMemberships" => ConfigNodePropertyBoolean,
    :"groupMembershipAttribute" => ConfigNodePropertyString,
    :"defaultGroups" => ConfigNodePropertyArray,
    :"nameIdFormat" => ConfigNodePropertyString,
    :"synchronizeAttributes" => ConfigNodePropertyArray,
    :"handleLogout" => ConfigNodePropertyBoolean,
    :"logoutUrl" => ConfigNodePropertyString,
    :"clockTolerance" => ConfigNodePropertyInteger,
    :"digestMethod" => ConfigNodePropertyString,
    :"signatureMethod" => ConfigNodePropertyString,
    :"identitySyncType" => ConfigNodePropertyDropDown,
    :"idpIdentifier" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"path", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"service.ranking", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"idpUrl", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"idpCertAlias", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"idpHttpRedirect", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"serviceProviderEntityId", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"assertionConsumerServiceURL", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"spPrivateKeyAlias", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"keyStorePassword", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"defaultRedirectUrl", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"userIDAttribute", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"useEncryption", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"createUser", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"userIntermediatePath", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"addGroupMemberships", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"groupMembershipAttribute", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"defaultGroups", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"nameIdFormat", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"synchronizeAttributes", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"handleLogout", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"logoutUrl", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"clockTolerance", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"digestMethod", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"signatureMethod", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"identitySyncType", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyDropDown, options)
    |> deserialize(:"idpIdentifier", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

