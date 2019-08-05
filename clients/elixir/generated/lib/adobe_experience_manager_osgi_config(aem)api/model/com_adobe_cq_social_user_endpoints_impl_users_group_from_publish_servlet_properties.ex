# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"sling.servlet.extensions",
    :"sling.servlet.paths",
    :"sling.servlet.methods"
  ]

  @type t :: %__MODULE__{
    :"sling.servlet.extensions" => ConfigNodePropertyString,
    :"sling.servlet.paths" => ConfigNodePropertyString,
    :"sling.servlet.methods" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"sling.servlet.extensions", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"sling.servlet.paths", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"sling.servlet.methods", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end
