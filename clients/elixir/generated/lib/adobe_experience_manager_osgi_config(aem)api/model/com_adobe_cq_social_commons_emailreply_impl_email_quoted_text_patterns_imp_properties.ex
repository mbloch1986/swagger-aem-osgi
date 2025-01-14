# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"pattern.time",
    :"pattern.newline",
    :"pattern.dayOfMonth",
    :"pattern.month",
    :"pattern.year",
    :"pattern.date",
    :"pattern.dateTime",
    :"pattern.email"
  ]

  @type t :: %__MODULE__{
    :"pattern.time" => ConfigNodePropertyString,
    :"pattern.newline" => ConfigNodePropertyString,
    :"pattern.dayOfMonth" => ConfigNodePropertyString,
    :"pattern.month" => ConfigNodePropertyString,
    :"pattern.year" => ConfigNodePropertyString,
    :"pattern.date" => ConfigNodePropertyString,
    :"pattern.dateTime" => ConfigNodePropertyString,
    :"pattern.email" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"pattern.time", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"pattern.newline", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"pattern.dayOfMonth", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"pattern.month", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"pattern.year", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"pattern.date", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"pattern.dateTime", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"pattern.email", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

