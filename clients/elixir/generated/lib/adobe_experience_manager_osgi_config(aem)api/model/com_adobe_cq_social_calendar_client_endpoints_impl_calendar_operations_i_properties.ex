# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"MaxRetry",
    :"fieldWhitelist",
    :"attachmentTypeBlacklist"
  ]

  @type t :: %__MODULE__{
    :"MaxRetry" => ConfigNodePropertyInteger,
    :"fieldWhitelist" => ConfigNodePropertyArray,
    :"attachmentTypeBlacklist" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"MaxRetry", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"fieldWhitelist", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"attachmentTypeBlacklist", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end
