# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"job.topics"
  ]

  @type t :: %__MODULE__{
    :"job.topics" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"job.topics", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

