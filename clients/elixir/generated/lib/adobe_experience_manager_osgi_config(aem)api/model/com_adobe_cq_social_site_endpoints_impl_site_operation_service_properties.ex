# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"fieldWhitelist",
    :"sitePathFilters",
    :"sitePackageGroup"
  ]

  @type t :: %__MODULE__{
    :"fieldWhitelist" => ConfigNodePropertyArray,
    :"sitePathFilters" => ConfigNodePropertyArray,
    :"sitePackageGroup" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialSiteEndpointsImplSiteOperationServiceProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"fieldWhitelist", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"sitePathFilters", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"sitePackageGroup", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end
