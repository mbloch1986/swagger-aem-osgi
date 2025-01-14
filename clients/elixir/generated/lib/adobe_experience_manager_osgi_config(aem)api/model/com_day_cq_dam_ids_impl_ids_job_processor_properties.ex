# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamIdsImplIdsJobProcessorProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"enable.multisession",
    :"ids.cc.enable",
    :"enable.retry",
    :"enable.retry.scripterror",
    :"externalizer.domain.cqhost",
    :"externalizer.domain.http"
  ]

  @type t :: %__MODULE__{
    :"enable.multisession" => ConfigNodePropertyBoolean,
    :"ids.cc.enable" => ConfigNodePropertyBoolean,
    :"enable.retry" => ConfigNodePropertyBoolean,
    :"enable.retry.scripterror" => ConfigNodePropertyBoolean,
    :"externalizer.domain.cqhost" => ConfigNodePropertyString,
    :"externalizer.domain.http" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamIdsImplIdsJobProcessorProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"enable.multisession", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"ids.cc.enable", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"enable.retry", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"enable.retry.scripterror", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"externalizer.domain.cqhost", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"externalizer.domain.http", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

